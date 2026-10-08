// /Script/Icarus.IcarusNPCController
// Derives from: AAIController > AController > AActor > UObject
// size 0x3E0, declared in Icarus/Source/Icarus/NPC/Controllers/IcarusNPCController.h

UCLASS(NotPlaceable, Config=Engine)
class AIcarusNPCController : public AAIController
{
public:
    UPROPERTY() UAISenseConfig_Sight* PerceptionVisionConfig;  // 0x0338, size 0x8
    UPROPERTY() UAISenseConfig_Hearing* PerceptionSoundConfig;  // 0x0340, size 0x8
    UPROPERTY() UAISenseConfig_Damage* PerceptionDamageConfig;  // 0x0348, size 0x8
    UPROPERTY() UAISenseConfig_Touch* PerceptionTouchConfig;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBlackboardComponent* AiBlackboardComponent;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBehaviorTreeComponent* AiBehaviourTreeComponent;  // 0x0360, size 0x8
    UPROPERTY() AIcarusNPCCharacter* NpcCharacter;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTrackBlockedPathLocations;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToRememberBlockedPaths;  // 0x0374, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoSmoothPathFollowing;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinCurvePawnVelocity;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCurvePawnVelocity;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFirstPointDistance;  // 0x0384, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PathInterpolationFactor;  // 0x0388, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FString DebugName;  // 0x0328, protected
    TMap<FVector,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVector,float,0> > BlockedPathLocations;  // 0x0390, private

    UFUNCTION() void CustomizeSenses();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBlockedPathLocations(TArray<FVector>& BlockedLocations) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) void GetDynamicSubtreesToInject(TMap<FGameplayTag, UBehaviorTree*>& DynamicSubtrees) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool OnProcessedDamage(AActor* PerceivedActor, FAIStimulus EventStimulus);  // parameters 0x45
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool OnProcessedNoise(AActor* PerceivedActor, FAIStimulus EventStimulus);  // parameters 0x45
    UFUNCTION() void OnStimulusDetected(const TArray<AActor*>& detected);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool SetNewBehaviourTree(UBehaviorTree* NewBehaviourTree);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool ShouldAddCurveToNavigationPath();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCurrentGoalLocation(const FVector& NewTargetLocation);  // parameters 0xC

    // Virtual functions that start here:
    //   GetDynamicSubtreesToInject_Implementation, OnProcessDamage, OnProcessSound, OnProcessVision
    //   SetNewBehaviourTree
};
