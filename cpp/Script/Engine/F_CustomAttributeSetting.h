// /Script/Engine.CustomAttributeSetting
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FCustomAttributeSetting
{
public:
    UPROPERTY(EditAnywhere) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FString Meaning;  // 0x0010, size 0x10
};
