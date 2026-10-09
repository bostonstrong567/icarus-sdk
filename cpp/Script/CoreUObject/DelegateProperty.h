// /Script/CoreUObject.DelegateProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UDelegateProperty : public UProperty
{
public:
    UFunction * SignatureFunction;  // 0x0070, not reflected
};
