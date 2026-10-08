// /Script/Icarus.VocalisationSetting
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/VocalisationSettings/VocalisationSettingsRowHandle.h

USTRUCT()
struct FVocalisationSetting : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVocalisationInterruptType InterruptType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanInterruptSelf;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float QueueTimeoutLength;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVocalisationPriority Priority;  // 0x0020, size 0x1
};
