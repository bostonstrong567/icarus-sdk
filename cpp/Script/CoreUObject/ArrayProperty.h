// /Script/CoreUObject.ArrayProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UArrayProperty : public UProperty
{
public:
    UProperty * Inner;  // 0x0070, not reflected
};
