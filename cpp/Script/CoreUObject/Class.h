// /Script/CoreUObject.Class
// Derives from: UStruct > UField > UObject
// size 0x230, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UClass : public UStruct
{
public:
    void (*)(const FObjectInitializer &) ClassConstructor;  // 0x00B0, not reflected
    UObject * (*)(FVTableHelper &) ClassVTableHelperCtorCaller;  // 0x00B8, not reflected
    void (*)(UObject *, FReferenceCollector &) ClassAddReferencedObjects;  // 0x00C0, not reflected
    uint32 : 1 bCooked;  // 0x00C8, not reflected
    uint32 : 31 ClassUnique;  // 0x00C8, not reflected
    EClassFlags ClassFlags;  // 0x00CC, not reflected
    EClassCastFlags ClassCastFlags;  // 0x00D0, not reflected
    UClass * ClassWithin;  // 0x00D8, not reflected
    UObject * ClassGeneratedBy;  // 0x00E0, not reflected
    FName ClassConfigName;  // 0x00E8, not reflected
    TArray<FRepRecord,TSizedDefaultAllocator<32> > ClassReps;  // 0x00F0, not reflected
    TArray<UField *,TSizedDefaultAllocator<32> > NetFields;  // 0x0100, not reflected
    int32 FirstOwnedClassRep;  // 0x0110, not reflected
    UObject * ClassDefaultObject;  // 0x0118, not reflected
    TArray<FImplementedInterface,TSizedDefaultAllocator<32> > Interfaces;  // 0x01D8, not reflected
    FGCReferenceTokenStream ReferenceTokenStream;  // 0x01E8, not reflected
    FWindowsCriticalSection ReferenceTokenStreamCritical;  // 0x01F8, not reflected
    TArray<FNativeFunctionLookup,TSizedDefaultAllocator<32> > NativeFunctionLookupTable;  // 0x0220, not reflected
protected:
    void * SparseClassData;  // 0x0120, not reflected
    UScriptStruct * SparseClassDataStruct;  // 0x0128, not reflected
private:
    TMap<FName,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UFunction *,0> > FuncMap;  // 0x0130, not reflected
    TMap<FName,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UFunction *,0> > SuperFuncMap;  // 0x0180, not reflected
    FWindowsRWLock SuperFuncMapLock;  // 0x01D0, not reflected

    // Virtual functions that start here:
    //   CreateDefaultObject, CreatePersistentUberGraphFrame, DestroyPersistentUberGraphFrame, FindArchetype
    //   GetArchetypeForCDO, GetArchetypeForSparseClassData, GetAuthoritativeClass
    //   GetDefaultObjectPreloadDependencies, GetPersistentUberGraphFrame, HasProperty
    //   InitPropertiesFromCustomList, IsFunctionImplementedInScript, PostInitInstance
    //   PostLoadDefaultObject, PurgeClass, SerializeDefaultObject, SetupObjectInitializer
};
