DELEGATE() void AIMoveCompletedSignature(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> Result);  // parameters 0x5
DELEGATE() void ActorPerceptionInfoUpdatedDelegate(const FActorPerceptionUpdateInfo& UpdateInfo);  // parameters 0x48
DELEGATE() void ActorPerceptionUpdatedDelegate(AActor* Actor, FAIStimulus Stimulus);  // parameters 0x44
DELEGATE() void EQSQueryDoneSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
DELEGATE() void HearNoiseDelegate(APawn* Instigator, const FVector& Location, float Volume);  // parameters 0x18
DELEGATE() void MoveTaskCompletedSignature(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController);  // parameters 0x10
DELEGATE() void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult> MovementResult);  // parameters 0x1
DELEGATE() void PerceptionUpdatedDelegate(const TArray<AActor*>& UpdatedActors);  // parameters 0x10
DELEGATE() void SeePawnDelegate(APawn* Pawn);  // parameters 0x8
DELEGATE() void SmartLinkReachedSignature(AActor* MovingActor, const FVector& DestinationPoint);  // parameters 0x14
