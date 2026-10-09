// /Script/Engine.InputActionKeyMapping
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FInputActionKeyMapping
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ActionName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShift : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCtrl : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlt : 1;  // 0x0008, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCmd : 1;  // 0x0008, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Key;  // 0x0010, size 0x18
};
