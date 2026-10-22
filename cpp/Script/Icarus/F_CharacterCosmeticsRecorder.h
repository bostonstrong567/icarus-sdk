// /Script/Icarus.CharacterCosmeticsRecorder
// size 0x170, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/Types/GenericTypes.h

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
    UPROPERTY(SaveGame) FString Customization_Complexion;  // 0x00C8, size 0x10
    UPROPERTY(SaveGame) FString Customization_Eyebrows;  // 0x00D8, size 0x10
    UPROPERTY(SaveGame) FString Customization_Piercings;  // 0x00E8, size 0x10
    UPROPERTY(SaveGame) bool IsReworkedCharacter;  // 0x00F8, size 0x1
    UPROPERTY(SaveGame) FString Customization_Age;  // 0x0100, size 0x10
    UPROPERTY(SaveGame) float Customization_SkinTone_V2;  // 0x0110, size 0x4
    UPROPERTY(SaveGame) float Customization_SkinTint_V2;  // 0x0114, size 0x4
    UPROPERTY(SaveGame) float Customization_SkinSaturation_V2;  // 0x0118, size 0x4
    UPROPERTY(SaveGame) FString Customization_Rebreather;  // 0x0120, size 0x10
    UPROPERTY(SaveGame) FString Customization_Helmet;  // 0x0130, size 0x10
    UPROPERTY(SaveGame) FString Customization_Hood;  // 0x0140, size 0x10
    UPROPERTY(SaveGame) int32 Customization_TopFaceShape;  // 0x0150, size 0x4
    UPROPERTY(SaveGame) int32 Customization_BottomFaceShape;  // 0x0154, size 0x4
    UPROPERTY(SaveGame) int32 Customization_LeftFaceShape;  // 0x0158, size 0x4
    UPROPERTY(SaveGame) int32 Customization_RightFaceShape;  // 0x015C, size 0x4
    UPROPERTY(SaveGame) float Customization_TopFaceBlendValue;  // 0x0160, size 0x4
    UPROPERTY(SaveGame) float Customization_BottomFaceBlendValue;  // 0x0164, size 0x4
    UPROPERTY(SaveGame) float Customization_LeftFaceBlendValue;  // 0x0168, size 0x4
    UPROPERTY(SaveGame) float Customization_RightFaceBlendValue;  // 0x016C, size 0x4
};
