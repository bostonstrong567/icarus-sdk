// /Script/Icarus.GetIcarusPlayerPersonaResult
// size 0x38, declared in Icarus/Source/Icarus/Subsystems/Online/RequestFriendInfo.h

USTRUCT()
struct FGetIcarusPlayerPersonaResult
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusPlayerPersona Persona;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERequestPlayerPersonaErrorCode ErrorCode;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSuccess;  // 0x0031, size 0x1
};
