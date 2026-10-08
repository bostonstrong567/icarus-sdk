// /Game/UI/InWorld/UMG_Inworld_CrateStatus.UMG_Inworld_CrateStatus_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_CrateStatus_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Main;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Main;  // 0x0278, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_CrateStatus(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateDisplay(bool Irradiated, int32 TotalSlotsUsed, int32 TotalSlots);  // parameters 0xC
};
