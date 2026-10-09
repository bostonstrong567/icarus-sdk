// /Script/CoreUObject.MapProperty
// Derives from: UProperty > UField > UObject
// size 0x98, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UMapProperty : public UProperty
{
public:
    UProperty * KeyProp;  // 0x0070, not reflected
    UProperty * ValueProp;  // 0x0078, not reflected
    FScriptMapLayout MapLayout;  // 0x0080, not reflected
};
