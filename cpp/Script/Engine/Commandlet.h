// /Script/Engine.Commandlet
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Commandlets/Commandlet.h

UCLASS(Abstract, Transient, MinimalAPI)
class UCommandlet : public UObject
{
public:
    UPROPERTY() FString HelpDescription;  // 0x0028, size 0x10
    UPROPERTY() FString HelpUsage;  // 0x0038, size 0x10
    UPROPERTY() FString HelpWebLink;  // 0x0048, size 0x10
    UPROPERTY() TArray<FString> HelpParamNames;  // 0x0058, size 0x10
    UPROPERTY() TArray<FString> HelpParamDescriptions;  // 0x0068, size 0x10
    UPROPERTY() uint8 IsServer : 1;  // 0x0078, mask 0x01
    UPROPERTY() uint8 IsClient : 1;  // 0x0078, mask 0x02
    UPROPERTY() uint8 IsEditor : 1;  // 0x0078, mask 0x04
    UPROPERTY() uint8 LogToConsole : 1;  // 0x0078, mask 0x08
    UPROPERTY() uint8 ShowErrorCount : 1;  // 0x0078, mask 0x10
    UPROPERTY() uint8 ShowProgress : 1;  // 0x0078, mask 0x20

    // Virtual functions that start here:
    //   CreateCustomEngine, Main
};
