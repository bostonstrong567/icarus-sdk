// /Script/Icarus.IcarusLogEntry
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/GameInstance/IcarusLogSubsystem.h

USTRUCT()
struct FIcarusLogEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLogCategoriesEnum OutputCategory;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELevel LogLevel;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString LogMessage;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FDateTime Timestamp;  // 0x0028, size 0x8
};
