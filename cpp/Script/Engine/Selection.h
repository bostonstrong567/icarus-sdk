// /Script/Engine.Selection
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Selection.h

UCLASS(Transient)
class USelection : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSizedDefaultAllocator<32> > SelectedObjects;  // 0x0028, protected
    TSet<USelection::FSelectedClassInfo,DefaultKeyFuncs<USelection::FSelectedClassInfo,0>,FDefaultSetAllocator> SelectedClasses;  // 0x0038, protected
    int32 SelectionMutex;  // 0x0088, protected
    bool bIsBatchDirty;  // 0x008C, protected
    FUObjectAnnotationSparseBool * SelectionAnnotation;  // 0x0090, protected
    bool bOwnsSelectionAnnotation;  // 0x0098, protected
};
