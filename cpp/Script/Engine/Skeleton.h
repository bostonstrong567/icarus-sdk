// /Script/Engine.Skeleton
// Derives from: UObject
// size 0x390, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

UCLASS(MinimalAPI)
class USkeleton : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider
{
public:
    UPROPERTY(EditAnywhere) TArray<FBoneNode> BoneTree;  // 0x0038, size 0x10
    UPROPERTY(Deprecated) TArray<FTransform> RefLocalPoses;  // 0x0048, size 0x10
    UPROPERTY() FGuid VirtualBoneGuid;  // 0x0170, size 0x10
    UPROPERTY() TArray<FVirtualBone> VirtualBones;  // 0x0180, size 0x10
    UPROPERTY() TArray<USkeletalMeshSocket*> Sockets;  // 0x0190, size 0x10
    UPROPERTY() FSmartNameContainer SmartNames;  // 0x01F0, size 0x50
    UPROPERTY() TArray<UBlendProfile*> BlendProfiles;  // 0x0270, size 0x10
    UPROPERTY() TArray<FAnimSlotGroup> SlotGroups;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0380, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReferenceSkeleton ReferenceSkeleton;  // 0x0058, protected
    FGuid Guid;  // 0x0160, protected
    TMap<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0> > AnimRetargetSources;  // 0x01A0
    FSmartNameMapping * AnimCurveMapping;  // 0x0240, protected
    TArray<unsigned short,TSizedDefaultAllocator<32> > DefaultCurveUIDList;  // 0x0248, protected
    TArray<FName,TSizedDefaultAllocator<32> > ExistingMarkerNames;  // 0x0258, protected
    uint16 AnimCurveUidVersion;  // 0x0268, private
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > SlotToGroupNameMap;  // 0x0290, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnRetargetSourceChanged;  // 0x02E0, private
    FWindowsCriticalSection LinkupCacheLock;  // 0x02F8
    TArray<FSkeletonToMeshLinkup,TSizedDefaultAllocator<32> > LinkupCache;  // 0x0320
    TMap<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0> > SkelMesh2LinkupCache;  // 0x0330
};
