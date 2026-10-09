// /Script/Engine.CheatManager
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/CheatManager.h

UCLASS()
class UCheatManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() ADebugCameraController* DebugCameraControllerRef;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<ADebugCameraController> DebugCameraControllerClass;  // 0x0030, size 0x8
    uint32 : 1 bDebugCapsuleSweep;  // 0x0038, not reflected
    uint32 : 1 bDebugCapsuleTraceComplex;  // 0x0038, not reflected
    uint32 : 1 bToggleAILogging;  // 0x0038, not reflected
    float DebugTraceDistance;  // 0x003C, not reflected
    float DebugCapsuleHalfHeight;  // 0x0040, not reflected
    float DebugCapsuleRadius;  // 0x0044, not reflected
    float DebugTraceDrawNormalLength;  // 0x0048, not reflected
    TEnumAsByte<enum ECollisionChannel> DebugTraceChannel;  // 0x004C, not reflected
    TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> > DebugTraceInfoList;  // 0x0050, not reflected
    TArray<FDebugTraceInfo,TSizedDefaultAllocator<32> > DebugTracePawnInfoList;  // 0x0060, not reflected
    int32 CurrentTraceIndex;  // 0x0070, not reflected
    int32 CurrentTracePawnIndex;  // 0x0074, not reflected
protected:
    UPROPERTY(Transient) TArray<UCheatManagerExtension*> CheatManagerExtensions;  // 0x0078, size 0x10
public:
    UFUNCTION(Exec) void BugIt(FString ScreenShotDescription);  // parameters 0x10
    UFUNCTION(Exec) void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);  // parameters 0x18
    UFUNCTION(Exec) void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);  // parameters 0x38
    UFUNCTION(Exec, BlueprintCallable) void ChangeSize(float F);  // parameters 0x4
    UFUNCTION(Exec) void CheatScript(FString ScriptName);  // parameters 0x10
    UFUNCTION(Exec, BlueprintCallable) void DamageTarget(float DamageAmount);  // parameters 0x4
    UFUNCTION(Exec) void DebugCapsuleSweep();
    UFUNCTION(Exec) void DebugCapsuleSweepCapture();
    UFUNCTION(Exec) void DebugCapsuleSweepChannel(TEnumAsByte<ECollisionChannel> Channel);  // parameters 0x1
    UFUNCTION(Exec) void DebugCapsuleSweepClear();
    UFUNCTION(Exec) void DebugCapsuleSweepComplex(bool bTraceComplex);  // parameters 0x1
    UFUNCTION(Exec) void DebugCapsuleSweepPawn();
    UFUNCTION(Exec) void DebugCapsuleSweepSize(float HalfHeight, float Radius);  // parameters 0x8
    UFUNCTION(Exec) void DestroyAll(TSubclassOf<AActor> aClass);  // parameters 0x8
    UFUNCTION(Exec) void DestroyAllPawnsExceptTarget();
    UFUNCTION(Exec) void DestroyPawns(TSubclassOf<APawn> aClass);  // parameters 0x8
    UFUNCTION(Exec) void DestroyServerStatReplicator();
    UFUNCTION(Exec, BlueprintCallable) void DestroyTarget();
    UFUNCTION(BlueprintCallable) void DisableDebugCamera();
    UFUNCTION(Exec) void DumpChatState();
    UFUNCTION(Exec) void DumpOnlineSessionState();
    UFUNCTION(Exec) void DumpPartyState();
    UFUNCTION(Exec) void DumpVoiceMutingState();
    UFUNCTION(BlueprintCallable) void EnableDebugCamera();
    UFUNCTION(Exec) void FlushLog();
    UFUNCTION(Exec, BlueprintCallable) void Fly();
    UFUNCTION(Exec, BlueprintCallable) void FreezeFrame(float Delay);  // parameters 0x4
    UFUNCTION(Exec, BlueprintCallable) void Ghost();
    UFUNCTION(Exec, BlueprintCallable) void God();
    UFUNCTION(Exec) void InvertMouse();
    UFUNCTION(Exec) void LogLoc();
    UFUNCTION(Exec) void OnlyLoadLevel(FName PackageName);  // parameters 0x8
    UFUNCTION(Exec, BlueprintCallable) void PlayersOnly();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveInitCheatManager();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerToggleAILogging();
    UFUNCTION(Exec) void SetMouseSensitivityToDefault();
    UFUNCTION(Exec) void SetWorldOrigin();
    UFUNCTION(Exec, BlueprintCallable) void Slomo(float NewTimeDilation);  // parameters 0x4
    UFUNCTION(Exec) void SpawnServerStatReplicator();
    UFUNCTION(Exec) void StreamLevelIn(FName PackageName);  // parameters 0x8
    UFUNCTION(Exec) void StreamLevelOut(FName PackageName);  // parameters 0x8
    UFUNCTION(Exec) void Summon(FString ClassName);  // parameters 0x10
    UFUNCTION(Exec, BlueprintCallable) void Teleport();
    UFUNCTION(Exec) void TestCollisionDistance();
    UFUNCTION(Exec) void ToggleAILogging();
    UFUNCTION(Exec) void ToggleDebugCamera();
    UFUNCTION(Exec) void ToggleServerStatReplicatorClientOverwrite();
    UFUNCTION(Exec) void ToggleServerStatReplicatorUpdateStatNet();
    UFUNCTION(Exec) void UpdateSafeArea();
    UFUNCTION(Exec) void ViewActor(FName ActorName);  // parameters 0x8
    UFUNCTION(Exec) void ViewClass(TSubclassOf<AActor> DesiredClass);  // parameters 0x8
    UFUNCTION(Exec) void ViewPlayer(FString S);  // parameters 0x10
    UFUNCTION(Exec) void ViewSelf();
    UFUNCTION(Exec, BlueprintCallable) void Walk();

    // Virtual functions that start here:
    //   BugIt, BugItGo, BugItGoString, BugItStringCreator, BugItWorker, ChangeSize, DamageTarget
    //   DebugCapsuleSweep, DebugCapsuleSweepCapture, DebugCapsuleSweepChannel, DebugCapsuleSweepClear
    //   DebugCapsuleSweepComplex, DebugCapsuleSweepPawn, DebugCapsuleSweepSize, DestroyAll
    //   DestroyAllPawnsExceptTarget, DestroyPawns, DestroyTarget, DisableDebugCamera
    //   DoGameSpecificBugItLog, DumpChatState, DumpOnlineSessionState, DumpPartyState, DumpVoiceMutingState
    //   EnableDebugCamera, FlushLog, Fly, FreezeFrame, GetTarget, Ghost, God, InitCheatManager, InvertMouse
    //   LogLoc, LogOutBugItGoToLogFile, OnlyLoadLevel, PlayersOnly, ServerToggleAILogging
    //   ServerToggleAILogging_Implementation, ServerToggleAILogging_Validate, SetLevelStreamingStatus
    //   SetMouseSensitivityToDefault, Slomo, StreamLevelIn, StreamLevelOut, Summon, Teleport
    //   TestCollisionDistance, ToggleAILogging, ToggleDebugCamera, ViewActor, ViewClass, ViewPlayer
    //   ViewSelf, Walk
};
