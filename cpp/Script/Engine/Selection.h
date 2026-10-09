// /Script/Engine.Selection
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Selection.h

UCLASS(Transient)
class USelection : public UObject
{
protected:
    TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> > SelectedObjects;  // 0x0028, not reflected
    TSet<USelection::FSelectedClassInfo,DefaultKeyFuncs<USelection::FSelectedClassInfo,0>,FDefaultSetAllocator> SelectedClasses;  // 0x0038, not reflected
    int32 SelectionMutex;  // 0x0088, not reflected
    bool bIsBatchDirty;  // 0x008C, not reflected
    FUObjectAnnotationSparseBool * SelectionAnnotation;  // 0x0090, not reflected
    bool bOwnsSelectionAnnotation;  // 0x0098, not reflected
};
