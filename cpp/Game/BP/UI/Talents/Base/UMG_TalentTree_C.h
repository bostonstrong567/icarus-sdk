// /Game/BP/UI/Talents/Base/UMG_TalentTree.UMG_TalentTree_C
// Derives from: UTalentTreeWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3A1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTree_C : public UTalentTreeWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* BottomSpacer;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Canvas;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* CanvasSlot;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* EditorSlot;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* LeftSpacer;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* RightSpacer;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* TopSpacer;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TreeOverlay;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Horizontal;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBox2D Boundary;  // 0x0384, size 0x14
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentTreeTitle_C* TitleWidget;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueRefresh;  // 0x03A0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ClearTalentTree() const;
    UFUNCTION(BlueprintCallable) void Connect_To_Model();  // named "Connect To Model"
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTree(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector2D GetCanvasOffset(bool bAbsolute) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector2D GetCanvasSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnTalentAdded(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnTalentChanged(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnTalentRemoved(const FTalentsRowHandle& Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnTalentTreeCreated();
    UFUNCTION(BlueprintCallable) void Refresh_Talent_State(UUMG_Talent_Base_C* Talent);  // parameters 0x8, named "Refresh Talent State"
    UFUNCTION(BlueprintCallable) void Refresh_Tree(UTalentModelInterface_Const* Model);  // parameters 0x8, named "Refresh Tree"
    UFUNCTION(BlueprintCallable) void Set_Height_Override(float Override);  // parameters 0x4, named "Set Height Override"
    UFUNCTION(BlueprintCallable) void Set_Width_Override(float Override);  // parameters 0x4, named "Set Width Override"
    UFUNCTION(BlueprintImplementableEvent) void SetEditorCanvas(UUserWidget* EditorCanvas);  // parameters 0x8
    UFUNCTION() void SetOrientation(TEnumAsByte<EOrientation> Orientation);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetZoomLevel(int32 Level, float Scale);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Talent_Hovered(UUMG_Talent_Base_C* Talent);  // parameters 0x8, named "Talent Hovered"
    UFUNCTION(BlueprintCallable) void Talent_Unhovered();  // named "Talent Unhovered"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
