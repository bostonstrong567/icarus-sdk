// /Script/Engine.TextPropertyTestObject
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Tests/TextPropertyTestObject.h

UCLASS()
class UTextPropertyTestObject : public UObject
{
public:
    UPROPERTY() FText DefaultedText;  // 0x0028, size 0x18
    UPROPERTY() FText UndefaultedText;  // 0x0040, size 0x18
    UPROPERTY() FText TransientText;  // 0x0058, size 0x18
};
