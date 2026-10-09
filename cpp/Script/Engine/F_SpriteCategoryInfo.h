// /Script/Engine.SpriteCategoryInfo
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Components/PrimitiveComponent.h

USTRUCT()
struct FSpriteCategoryInfo
{
public:
    UPROPERTY() FName Category;  // 0x0000, size 0x8
    UPROPERTY() FText DisplayName;  // 0x0008, size 0x18
    UPROPERTY() FText Description;  // 0x0020, size 0x18
};
