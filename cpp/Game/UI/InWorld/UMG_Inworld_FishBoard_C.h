// /Game/UI/InWorld/UMG_Inworld_FishBoard.UMG_Inworld_FishBoard_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_FishBoard_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* LengthBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_4;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WeightBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeightText;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishBoardController* Controller;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFishBoardRecord> Scores;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_FishCrate_C* Crate;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxWeight;  // 0x02D0, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_FishBoard(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ScoresUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
