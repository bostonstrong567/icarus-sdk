// /Script/Icarus.Firearm3PAnimData
// size 0x140, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearm3PAnimData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Idle;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Charge;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Aim;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> AimCharge;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> Fire;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> AimFire;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UBlendSpace1D> Reload;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> ReloadMontage;  // 0x0118, size 0x28
};
