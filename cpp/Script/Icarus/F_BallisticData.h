// /Script/Icarus.BallisticData
// size 0x1F0, declared in Icarus/Source/Icarus/Traits/Behaviours/BallisticData.h

USTRUCT()
struct FBallisticData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UBallisticComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageVariationPercentage;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanStealthAttack;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHomingProjectile;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanKillCam;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUnbreakableDuringKillCam;  // 0x004B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GravityScale;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowPickupAfterSettle;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusPayload> PayloadClass;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPayloadDeploymentType PayloadDeploymentType;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PayloadDeploymentTimerDelay;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFXSystemAsset> TrailParticle;  // 0x0088, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPlayHitEffects;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakChance;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurabilityDamage;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PostDeployLifetime;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CullDistanceSquared;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AttachOnHit;  // 0x00C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBounceSettings ProjectileBounceSettings;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> OverrideStaticMesh;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> OverrideSkeletalMesh;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UPhysicsAsset> OverridePhysicsAsset;  // 0x0130, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RotationFollowsVelocity;  // 0x0158, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator VelocityRotationOffset;  // 0x015C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator AngularRotation;  // 0x0168, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnPositionOffset;  // 0x0174, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBallisticAudioData AudioData;  // 0x0180, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseActorPooling;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableRecorderComponent;  // 0x01D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OnHitAINoiseEventRange;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelaySpawningVisibilityTime;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseProjectileWeightForLauncher;  // 0x01E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LauncherProjectileAdditionalForceMultiplier;  // 0x01E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnorePayloadDeployOverride;  // 0x01EC, size 0x1
};
