// /Script/AIModule.AISystem
// Derives from: UAISystemBase > UObject
// size 0x130, declared in Engine/Source/Runtime/AIModule/Classes/AISystem.h

UCLASS(Config=Engine)
class UAISystem : public UAISystemBase
{
public:
    UPROPERTY(EditAnywhere, Config) FSoftClassPath PerceptionSystemClassName;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath HotSpotManagerClassName;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, Config) float AcceptanceRadius;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, Config) float PathfollowingRegularPathPointAcceptanceRadius;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere, Config) float PathfollowingNavLinkAcceptanceRadius;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bFinishMoveOnGoalOverlap;  // 0x0094, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAcceptPartialPaths;  // 0x0095, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowStrafing;  // 0x0096, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableBTAITasks;  // 0x0097, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAllowControllersAsEQSQuerier;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableDebuggerPlugin;  // 0x0099, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForgetStaleActors;  // 0x009A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAddBlackboardSelfKey;  // 0x009B, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;  // 0x009C, size 0x1
    UPROPERTY(Transient) UBehaviorTreeManager* BehaviorTreeManager;  // 0x00A0, size 0x8
    UPROPERTY(Transient) UEnvQueryManager* EnvironmentQueryManager;  // 0x00A8, size 0x8
    UPROPERTY(Transient) UAIPerceptionSystem* PerceptionSystem;  // 0x00B0, size 0x8
    UPROPERTY(Transient) TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;  // 0x00B8, size 0x10
    UPROPERTY(Transient) UAIHotSpotManager* HotSpotManager;  // 0x00C8, size 0x8
    UPROPERTY(Transient) UNavLocalGridManager* NavLocalGrids;  // 0x00D0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1> > BlackboardDataToComponentsMap;  // 0x00D8, protected
    FDelegateHandle ActorSpawnedDelegateHandle;  // 0x0128, protected

    UFUNCTION(Exec) void AIIgnorePlayers();
    UFUNCTION(Exec) void AILoggingVerbose();

    // Virtual functions that start here:
    //   AIIgnorePlayers, AILoggingVerbose, ConditionalLoadDebuggerPlugin, OnActorSpawned
};
