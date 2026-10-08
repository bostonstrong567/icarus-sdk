// /Script/Icarus.DialogueLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Dialogue/DialogueLibrary.h

UCLASS()
class UDialogueLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToDialogueTable(FName Name, FDialogue Data, FDialogueRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x101
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDialogueEnum(FDialogueEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDialogueRowHandle CastToDialogueRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDialogueEnum A, FDialogueEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDialogueRowHandleFDialogueRowHandle(FDialogueRowHandle RowHandleA, FDialogueRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDialogueStruct(FDialogueRowHandle RowHandle, FDialogue& Dialogue, EValid& Paths);  // parameters 0xF9
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueRowHandle MakeDialogue(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueEnum MakeDialogueEnum(FDialogueEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueRowHandle MakeDialogueFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueRowHandle MakeLiteralDialogue(FDialogueRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDialogueEnum A, FDialogueEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDialogueEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDialogueTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueEnum RowHandleToStruct(FDialogueRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDialogueEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDialogueEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueRowHandle StructToRowHandle(FDialogueEnum EnumValue);  // parameters 0x28
};
