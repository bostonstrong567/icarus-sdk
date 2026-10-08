// /Game/Prototypes/SpaceStationPlayer/SpaceStation_Gamemode.SpaceStation_Gamemode_C
// Derives from: AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x508, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ASpaceStation_Gamemode_C : public AIcarusGameModeBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InProgress;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString HostName;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectRow;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EpochTime;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo SessionProspectInfo;  // 0x0358, size 0x1B0

    UFUNCTION() void ExecuteUbergraph_SpaceStation_Gamemode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RequestSessionSettings();
    UFUNCTION(BlueprintCallable) void UpdateProspectInfo();
};
