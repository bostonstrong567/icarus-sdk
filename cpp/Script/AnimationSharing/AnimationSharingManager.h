// /Script/AnimationSharing.AnimationSharingManager
// Derives from: UObject
// size 0x88, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingManager.h

UCLASS(Config=Engine)
class UAnimationSharingManager : public UObject
{
public:
    UPROPERTY(Transient) TArray<USkeleton*> Skeletons;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Transient) TArray<UAnimSharingInstance*> PerSkeletonData;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FAnimationSharingScalability ScalabilitySettings;  // 0x0048, protected
    FTickAnimationSharingFunction TickFunction;  // 0x0058, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) static bool AnimationSharingEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* Setup);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton);  // parameters 0x10
};
