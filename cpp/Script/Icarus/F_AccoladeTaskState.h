// /Script/Icarus.AccoladeTaskState
// size 0x20, declared in Icarus/Source/Icarus/Subsystems/LocalPlayer/AccoladeSubsystem.h

USTRUCT()
struct FAccoladeTaskState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText TaskName;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bComplete;  // 0x0018, size 0x1
};
