// /Script/Icarus.DeployableSetup
// size 0x198, declared in Icarus/Source/Icarus/DataStructs/DeployableSetup.h

USTRUCT()
struct FDeployableSetup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> DeployableBlueprint;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DeployableIcon;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DeployableName;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> PreviewStaticMesh;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DeployedSound;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemsStaticRowHandle, TSoftObjectPtr<UFMODEvent>> ItemAddedSounds;  // 0x00D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AudioOcclusionAmount;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SnapToSurfaceNormal;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSurfaceSnapAngle;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportsCustomRotation;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EWorldPlacementType WorldPlacementType;  // 0x012D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideInvalidPlacementPreview;  // 0x012E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDeployableSnapBehaviour SnapBehaviour;  // 0x012F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> SnapActorTags;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> SnapSocketsOrTags;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreCollisionWhenSnapped;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSnapSocketRotation;  // 0x0151, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSnapSocketScale;  // 0x0152, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanAffectNavigation;  // 0x0153, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavArea> NavAreaClass;  // 0x0158, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector NavigationFallbackExtents;  // 0x0160, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxRestackingAmount;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeployCollisionExtentOffset;  // 0x0170, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeployCollisionLocationOffset;  // 0x017C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeployPlacementOffset;  // 0x0188, size 0xC
};
