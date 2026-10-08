// /Script/CoreUObject.GCObjectReferencer
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/GCObject.h

UCLASS()
class UGCObjectReferencer : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FGCObject *,TSizedDefaultAllocator<32> > ReferencedObjects;  // 0x0028, private
    FWindowsCriticalSection ReferencedObjectsCritical;  // 0x0038, private
    bool bIsAddingReferencedObjects;  // 0x0060, private
    FGCObject * CurrentlySerializingObject;  // 0x0068, private
};
