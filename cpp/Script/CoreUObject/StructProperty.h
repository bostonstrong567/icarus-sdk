// /Script/CoreUObject.StructProperty
// Derives from: UProperty > UField > UObject
// size 0x78, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/UnrealTypePrivate.h

UCLASS()
class UStructProperty : public UProperty
{
public:
    UScriptStruct * Struct;  // 0x0070, not reflected
};
