// /Script/Icarus.TalentTreeWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x330, declared in Icarus/Source/Icarus/Talents/View/TalentTreeWidget.h

UCLASS(EditInlineNew, MinimalAPI)
class UTalentTreeWidget : public UUserWidget
{
public:
    UPROPERTY(BlueprintReadWrite) TMap<FTalentsRowHandle, UTalentWidget*> TalentsWidgetsMap;  // 0x0260, size 0x50
    UPROPERTY(Instanced, BlueprintReadOnly) UTalentViewInterface* TalentView;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UTalentTreeCanvas* TalentTreeCanvas;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTalentTreesRowHandle TalentTree;  // 0x02C0, size 0x18
    UPROPERTY(BlueprintReadOnly) TSet<FTalentsRowHandle> Talents;  // 0x02D8, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    bool bQueueRefresh;  // 0x0328, protected

    UFUNCTION(BlueprintImplementableEvent) void ClearTalentTree() const;
    UFUNCTION(BlueprintImplementableEvent) FVector2D GetCanvasOffset(bool bAbsolute) const;  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) FVector2D GetCanvasSize() const;  // parameters 0x8
    UFUNCTION() void OnModelStateChanged(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTalentAdded(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentChanged(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentRemoved(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnTalentTreeCreated();
    UFUNCTION(BlueprintImplementableEvent) void SetEditorCanvas(UUserWidget* EditorCanvas);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTalentTree(UTalentViewInterface* View, UTalentGraphWidget* OwningGraphWidget, const FTalentTreesRowHandle& NewTalentTree);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetZoomLevel(int32 Level, float Scale);  // parameters 0x8
};
