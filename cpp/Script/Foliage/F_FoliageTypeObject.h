// /Script/Foliage.FoliageTypeObject
// size 0x20, declared in Engine/Source/Runtime/Foliage/Public/FoliageTypeObject.h

USTRUCT()
struct FFoliageTypeObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) UObject* FoliageTypeObject;  // 0x0000, size 0x8
    UPROPERTY(Transient) UFoliageType* TypeInstance;  // 0x0008, size 0x8
    UPROPERTY() bool bIsAsset;  // 0x0010, size 0x1
    UPROPERTY(Deprecated) TSubclassOf<UFoliageType_InstancedStaticMesh> Type;  // 0x0018, size 0x8
};
