// /Script/Icarus.CharacterCosmeticsRecorder
// size 0xC8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/Types/GenericTypes.h

USTRUCT()
struct FCharacterCosmeticsRecorder
{
public:
    UPROPERTY(SaveGame) FString Customization_Head;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) FString Customization_Hair;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) FString Customization_HairColor;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) FString Customization_Body;  // 0x0030, size 0x10
    UPROPERTY(SaveGame) FString Customization_BodyColor;  // 0x0040, size 0x10
    UPROPERTY(SaveGame) FString Customization_SkinTone;  // 0x0050, size 0x10
    UPROPERTY(SaveGame) FString Customization_HeadTattoo;  // 0x0060, size 0x10
    UPROPERTY(SaveGame) FString Customization_HeadScar;  // 0x0070, size 0x10
    UPROPERTY(SaveGame) FString Customization_HeadFacialHair;  // 0x0080, size 0x10
    UPROPERTY(SaveGame) FString Customization_CapLogo;  // 0x0090, size 0x10
    UPROPERTY(SaveGame) bool IsMale;  // 0x00A0, size 0x1
    UPROPERTY(SaveGame) FString Customization_Voice;  // 0x00A8, size 0x10
    UPROPERTY(SaveGame) FString Customization_EyeColor;  // 0x00B8, size 0x10
};
