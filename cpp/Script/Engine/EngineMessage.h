// /Script/Engine.EngineMessage
// Derives from: ULocalMessage > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/EngineMessage.h

UCLASS(Abstract, MinimalAPI)
class UEngineMessage : public ULocalMessage
{
public:
    UPROPERTY() FString FailedPlaceMessage;  // 0x0028, size 0x10
    UPROPERTY() FString MaxedOutMessage;  // 0x0038, size 0x10
    UPROPERTY() FString EnteredMessage;  // 0x0048, size 0x10
    UPROPERTY() FString LeftMessage;  // 0x0058, size 0x10
    UPROPERTY() FString GlobalNameChange;  // 0x0068, size 0x10
    UPROPERTY() FString SpecEnteredMessage;  // 0x0078, size 0x10
    UPROPERTY() FString NewPlayerMessage;  // 0x0088, size 0x10
    UPROPERTY() FString NewSpecMessage;  // 0x0098, size 0x10
};
