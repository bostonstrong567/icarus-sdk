// /Script/Icarus.FirearmSoundData
// size 0x38, declared in Icarus/Source/Icarus/DataStructs/Audio/FirearmAudioData.h

USTRUCT()
struct FFirearmSoundData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Event;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachPoint;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseChargeParameter;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseChargingParameter;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseAmmoCountParameter;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseReloadingParameter;  // 0x0033, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseAimingParameter;  // 0x0034, size 0x1
};
