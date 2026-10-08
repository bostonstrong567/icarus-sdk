// /Script/CoreUObject.Class
// Derives from: UStruct > UField > UObject
// size 0x230, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UClass : public UStruct
{
public:

    // Not reflected: the engine's scripting cannot see these.
    void (*)(const FObjectInitializer &) ClassConstructor;  // 0x00B0
    UObject * (*)(FVTableHelper &) ClassVTableHelperCtorCaller;  // 0x00B8
    void (*)(UObject *, FReferenceCollector &) ClassAddReferencedObjects;  // 0x00C0
    uint32 : 31 ClassUnique;  // 0x00C8
    uint32 : 1 bCooked;  // 0x00C8
    EClassFlags ClassFlags;  // 0x00CC
    EClassCastFlags ClassCastFlags;  // 0x00D0
    UClass * ClassWithin;  // 0x00D8
    UObject * ClassGeneratedBy;  // 0x00E0
    FName ClassConfigName;  // 0x00E8
    TArray<FRepRecord,TSizedDefaultAllocator<32> > ClassReps;  // 0x00F0
    TArray<UField *,TSizedDefaultAllocator<32> > NetFields;  // 0x0100
    int32 FirstOwnedClassRep;  // 0x0110
    UObject * ClassDefaultObject;  // 0x0118
    void * SparseClassData;  // 0x0120, protected
    UScriptStruct * SparseClassDataStruct;  // 0x0128, protected
    TMap<FName,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UFunction *,0> > FuncMap;  // 0x0130, private
    TMap<FName,UFunction *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UFunction *,0> > SuperFuncMap;  // 0x0180, private
    FWindowsRWLock SuperFuncMapLock;  // 0x01D0, private
    TArray<FImplementedInterface,TSizedDefaultAllocator<32> > Interfaces;  // 0x01D8
    FGCReferenceTokenStream ReferenceTokenStream;  // 0x01E8
    FWindowsCriticalSection ReferenceTokenStreamCritical;  // 0x01F8
    TArray<FNativeFunctionLookup,TSizedDefaultAllocator<32> > NativeFunctionLookupTable;  // 0x0220

    // Virtual functions that start here:
    //   CreateDefaultObject, CreatePersistentUberGraphFrame, DestroyPersistentUberGraphFrame, FindArchetype
    //   GetArchetypeForCDO, GetArchetypeForSparseClassData, GetAuthoritativeClass
    //   GetDefaultObjectPreloadDependencies, GetPersistentUberGraphFrame, HasProperty
    //   InitPropertiesFromCustomList, IsFunctionImplementedInScript, PostInitInstance
    //   PostLoadDefaultObject, PurgeClass, SerializeDefaultObject, SetupObjectInitializer
};
