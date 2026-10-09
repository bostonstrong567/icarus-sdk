// /Script/VariantManagerContent.CapturedPropSegment
// size 0x28, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/PropertyValue.h

USTRUCT()
struct FCapturedPropSegment
{
public:
    UPROPERTY() FString PropertyName;  // 0x0000, size 0x10
    UPROPERTY() int32 PropertyIndex;  // 0x0010, size 0x4
    UPROPERTY() FString ComponentName;  // 0x0018, size 0x10
};
