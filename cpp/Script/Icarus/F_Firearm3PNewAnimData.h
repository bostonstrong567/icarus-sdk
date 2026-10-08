// /Script/Icarus.Firearm3PNewAnimData
// size 0x140, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearm3PNewAnimData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Poses;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Run;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Sprint;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Impulse;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Aim_Sweep;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimSequence> Crouch_Aim_Sweep;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> Reload;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> Fire;  // 0x0118, size 0x28
};
