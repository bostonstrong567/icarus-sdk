// /Script/CoreUObject.GCObjectReferencer
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/GCObject.h

UCLASS()
class UGCObjectReferencer : public UObject
{
private:
    TArray<FGCObject *,TSizedDefaultAllocator<32> > ReferencedObjects;  // 0x0028, not reflected
    FWindowsCriticalSection ReferencedObjectsCritical;  // 0x0038, not reflected
    bool bIsAddingReferencedObjects;  // 0x0060, not reflected
    FGCObject * CurrentlySerializingObject;  // 0x0068, not reflected
};
