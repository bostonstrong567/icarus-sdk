// /Game/UI/InWorld/UMG_Inworld_HighScore.UMG_Inworld_HighScore_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_HighScore_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TargetRangeScore_C* UMG_TargetRangeScore;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ATargetRangeController* RangeController;  // 0x0278, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_HighScore(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
