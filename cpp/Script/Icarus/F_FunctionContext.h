// /Script/Icarus.FunctionContext
// size 0x18, declared in Icarus/Source/Icarus/AI/BT/BTT_ExecuteFunction.h

USTRUCT()
struct FFunctionContext
{
    UPROPERTY(EditAnywhere) TSubclassOf<UObject> ContextClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FString FunctionToExecute;  // 0x0008, size 0x10
};
