// /Script/CoreUObject.Object
// size 0x28, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Object.h

UCLASS(Abstract)
class UObject
{
public:
    UFUNCTION(BlueprintImplementableEvent) void ExecuteUbergraph(int32 EntryPoint);  // parameters 0x4

    // Virtual functions that start here:
    //   AreNativePropertiesIdenticalTo, BeginDestroy, BuildSubobjectMapping, CallRemoteFunction
    //   CheckDefaultSubobjectsInternal, ExportCustomProperties, FinishDestroy, GetAssetRegistryTags
    //   GetConfigOverridePlatform, GetDesc, GetDetailedInfoInternal, GetExporterName, GetFunctionCallspace
    //   GetLifetimeReplicatedProps, GetNativePropertyValues, GetNetPushIdDynamic, GetPreloadDependencies
    //   GetPrestreamPackages, GetPrimaryAssetId, GetResourceSizeEx, GetRestoreForUObjectOverwrite
    //   GetSparseClassDataStruct, GetSubobjectsWithStableNamesForNetworking, GetWorld
    //   HasNonEditorOnlyReferences, ImportCustomProperties, IsAsset, IsDestructionThreadSafe, IsEditorOnly
    //   IsFullNameStableForNetworking, IsLocalizedResource, IsNameStableForNetworking, IsPostLoadThreadSafe
    //   IsReadyForAsyncPostLoad, IsReadyForFinishDestroy, IsSafeForRootSet, IsSupportedForNetworking
    //   MarkAsEditorOnlySubobject, NeedsLoadForClient, NeedsLoadForEditorGame, NeedsLoadForServer
    //   NeedsLoadForTargetPlatform, OverridePerObjectConfigSection, PostCDOContruct, PostDuplicate
    //   PostEditImport, PostInitProperties, PostInterpChange, PostLoad, PostLoadSubobjects, PostNetReceive
    //   PostReloadConfig, PostRename, PostRepNotifies, PostSaveRoot, PreDestroyFromReplication
    //   PreDuplicate, PreNetReceive, PreSave, PreSaveRoot, ProcessConsoleExec, ProcessEvent
    //   RegenerateClass, Rename, Serialize, SetNetPushIdDynamic, ShutdownAfterError, TagSubobjects
    //   ValidateGeneratedRepEnums
};
