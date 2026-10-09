// /Script/Engine.FormatArgumentData
// size 0x40, declared in Engine/Source/Runtime/Core/Public/Internationalization/Text.h

USTRUCT()
struct FFormatArgumentData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ArgumentName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFormatArgumentType> ArgumentValueType;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ArgumentValue;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArgumentValueInt;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArgumentValueFloat;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETextGender ArgumentValueGender;  // 0x0038, size 0x1
};
