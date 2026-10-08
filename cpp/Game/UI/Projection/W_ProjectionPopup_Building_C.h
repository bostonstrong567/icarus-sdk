// /Game/UI/Projection/W_ProjectionPopup_Building.W_ProjectionPopup_Building_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Building_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DurabilityBar;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x02D0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_ProjectionPopup_Building(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateBuildingVisuals();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
};
