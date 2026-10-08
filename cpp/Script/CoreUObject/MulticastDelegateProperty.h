// /Script/CoreUObject.MulticastDelegateProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UMulticastDelegateProperty : public UProperty
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UFunction * SignatureFunction;  // 0x0070
};
