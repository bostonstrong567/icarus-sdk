// /Script/ArchVisCharacter.ArchVisCharacter
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x520, declared in Engine/Plugins/Runtime/ArchVisCharacter/Source/ArchVisCharacter/Public/ArchVisCharacter.h

UCLASS(Config=Game)
class AArchVisCharacter : public ACharacter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString LookUpAxisName;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString LookUpAtRateAxisName;  // 0x04C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString TurnAxisName;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString TurnAtRateAxisName;  // 0x04E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString MoveForwardAxisName;  // 0x04F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString MoveRightAxisName;  // 0x0508, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MouseSensitivityScale_Pitch;  // 0x0518, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MouseSensitivityScale_Yaw;  // 0x051C, size 0x4

    // Virtual functions that start here:
    //   LookUp, LookUpAtRate, MoveForward, MoveRight, Turn, TurnAtRate
};
