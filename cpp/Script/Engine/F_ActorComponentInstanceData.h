// /Script/Engine.ActorComponentInstanceData
// size 0x68, declared in Engine/Source/Runtime/Engine/Public/ComponentInstanceDataCache.h

USTRUCT()
struct FActorComponentInstanceData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UObject* SourceComponentTemplate;  // 0x0008, size 0x8
    UPROPERTY() EComponentCreationMethod SourceComponentCreationMethod;  // 0x0010, size 0x1
    UPROPERTY() int32 SourceComponentTypeSerializedIndex;  // 0x0014, size 0x4
    UPROPERTY() TArray<uint8> SavedProperties;  // 0x0018, size 0x10
    UPROPERTY() FActorComponentDuplicatedObjectData UniqueTransientPackage;  // 0x0028, size 0x10
    UPROPERTY() TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects;  // 0x0038, size 0x10
    UPROPERTY() TArray<UObject*> ReferencedObjects;  // 0x0048, size 0x10
    UPROPERTY() TArray<FName> ReferencedNames;  // 0x0058, size 0x10
};
