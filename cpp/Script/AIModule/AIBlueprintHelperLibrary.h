// /Script/AIModule.AIBlueprintHelperLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h

UCLASS()
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static AAIController* GetAIController(AActor* ControlledActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UBlackboardComponent* GetBlackboard(AActor* Target);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UNavigationPath* GetCurrentPath(AController* Controller);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetCurrentPathIndex(AController* Controller);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FVector> GetCurrentPathPoints(AController* Controller);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetNextNavLinkIndex(AController* Controller);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidAIDirection(FVector DirectionVector);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidAILocation(FVector Location);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidAIRotation(FRotator Rotation);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static void SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SimpleMoveToActor(AController* Controller, AActor* Goal);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SimpleMoveToLocation(AController* Controller, const FVector& Goal);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static APawn* SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);  // parameters 0xA
};
