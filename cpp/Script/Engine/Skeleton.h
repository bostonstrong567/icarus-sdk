// /Script/Engine.Skeleton
// Derives from: UObject
// size 0x390, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

UCLASS(MinimalAPI)
class USkeleton : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() TArray<USkeletalMeshSocket*> Sockets;  // 0x0190, size 0x10
    TMap<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0> > AnimRetargetSources;  // 0x01A0, not reflected
    UPROPERTY() TArray<UBlendProfile*> BlendProfiles;  // 0x0270, size 0x10
    FWindowsCriticalSection LinkupCacheLock;  // 0x02F8, not reflected
    TArray<FSkeletonToMeshLinkup,TSizedDefaultAllocator<32> > LinkupCache;  // 0x0320, not reflected
    TMap<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0> > SkelMesh2LinkupCache;  // 0x0330, not reflected
protected:
    UPROPERTY(EditAnywhere) TArray<FBoneNode> BoneTree;  // 0x0038, size 0x10
    UPROPERTY(Deprecated) TArray<FTransform> RefLocalPoses;  // 0x0048, size 0x10
    FReferenceSkeleton ReferenceSkeleton;  // 0x0058, not reflected
    FGuid Guid;  // 0x0160, not reflected
    UPROPERTY() FGuid VirtualBoneGuid;  // 0x0170, size 0x10
    UPROPERTY() TArray<FVirtualBone> VirtualBones;  // 0x0180, size 0x10
    UPROPERTY() FSmartNameContainer SmartNames;  // 0x01F0, size 0x50
    FSmartNameMapping * AnimCurveMapping;  // 0x0240, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > DefaultCurveUIDList;  // 0x0248, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > ExistingMarkerNames;  // 0x0258, not reflected
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0380, size 0x10
private:
    uint16 AnimCurveUidVersion;  // 0x0268, not reflected
    UPROPERTY() TArray<FAnimSlotGroup> SlotGroups;  // 0x0280, size 0x10
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > SlotToGroupNameMap;  // 0x0290, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnRetargetSourceChanged;  // 0x02E0, not reflected
};
