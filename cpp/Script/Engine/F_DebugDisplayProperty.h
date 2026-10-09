// /Script/Engine.DebugDisplayProperty
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/DebugDisplayProperty.h

USTRUCT()
struct FDebugDisplayProperty
{
public:
    UPROPERTY() UObject* Obj;  // 0x0000, size 0x8
    UPROPERTY() TSubclassOf<UObject> WithinClass;  // 0x0008, size 0x8
    FName PropertyName;  // 0x0010, not reflected
    uint32 : 1 bSpecialProperty;  // 0x0018, not reflected
};
