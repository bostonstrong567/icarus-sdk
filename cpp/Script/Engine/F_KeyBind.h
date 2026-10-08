// /Script/Engine.KeyBind
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h

USTRUCT()
struct FKeyBind
{
    UPROPERTY(Config) FKey Key;  // 0x0000, size 0x18
    UPROPERTY(Config) FString Command;  // 0x0018, size 0x10
    UPROPERTY(Config) uint8 Control : 1;  // 0x0028, mask 0x01
    UPROPERTY(Config) uint8 Shift : 1;  // 0x0028, mask 0x02
    UPROPERTY(Config) uint8 Alt : 1;  // 0x0028, mask 0x04
    UPROPERTY(Config) uint8 Cmd : 1;  // 0x0028, mask 0x08
    UPROPERTY(Config) uint8 bIgnoreCtrl : 1;  // 0x0028, mask 0x10
    UPROPERTY(Config) uint8 bIgnoreShift : 1;  // 0x0028, mask 0x20
    UPROPERTY(Config) uint8 bIgnoreAlt : 1;  // 0x0028, mask 0x40
    UPROPERTY(Config) uint8 bIgnoreCmd : 1;  // 0x0028, mask 0x80
    UPROPERTY(Transient) uint8 bDisabled : 1;  // 0x0029, mask 0x01
};
