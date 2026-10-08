// /Game/BP/UI/Talents/Base/UMG_TalentGraph.UMG_TalentGraph_C
// Derives from: UTalentGraphWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x369, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentGraph_C : public UTalentGraphWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B8, size 0x8
    UPROPERTY(Instanced) UBorder* Border_0;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPanningPanel* Panner;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* TalentTreeHorizontalBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* TitleWidgets;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundBrush;  // 0x02E0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideTitle;  // 0x0368, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_TalentGraph(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnTalentTreeAdded(UTalentTreeWidget* TalentTree);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnZoomChanged(int32 Level, float Scale);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
    UFUNCTION(BlueprintCallable) void Setup_Panner();  // named "Setup Panner"
};
