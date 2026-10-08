// /Script/Engine.RollbackNetStartupActorInfo
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/DemoNetDriver.h

USTRUCT()
struct FRollbackNetStartupActorInfo
{
    UPROPERTY() UObject* Archetype;  // 0x0008, size 0x8
    UPROPERTY() ULevel* Level;  // 0x0038, size 0x8
    UPROPERTY() TArray<UObject*> ObjReferences;  // 0x00A0, size 0x10

    // Not reflected:
    FName Name;  // 0x0000
    FVector Location;  // 0x0010
    FRotator Rotation;  // 0x001C
    FVector Scale3D;  // 0x0028
    TSharedPtr<FRepState,0> RepState;  // 0x0040
    TMap<FString,TSharedPtr<FRepState,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,0>,0> > SubObjRepState;  // 0x0050
};
