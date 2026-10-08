// /Script/Icarus.DialogueSpeakerLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/DialogueSpeaker/DialogueSpeakerLibrary.h

UCLASS()
class UDialogueSpeakerLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToDialogueSpeakerTable(FName Name, FDialogueSpeaker Data, FDialogueSpeakerRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDialogueSpeakerEnum(FDialogueSpeakerEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FDialogueSpeakerRowHandle CastToDialogueSpeakerRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FDialogueSpeakerEnum A, FDialogueSpeakerEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FDialogueSpeakerRowHandleFDialogueSpeakerRowHandle(FDialogueSpeakerRowHandle RowHandleA, FDialogueSpeakerRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetDialogueSpeakerStruct(FDialogueSpeakerRowHandle RowHandle, FDialogueSpeaker& DialogueSpeaker, EValid& Paths);  // parameters 0x49
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerRowHandle MakeDialogueSpeaker(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerEnum MakeDialogueSpeakerEnum(FDialogueSpeakerEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerRowHandle MakeDialogueSpeakerFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerRowHandle MakeLiteralDialogueSpeaker(FDialogueSpeakerRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FDialogueSpeakerEnum A, FDialogueSpeakerEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FDialogueSpeakerEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromDialogueSpeakerTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerEnum RowHandleToStruct(FDialogueSpeakerRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FDialogueSpeakerEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FDialogueSpeakerEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDialogueSpeakerRowHandle StructToRowHandle(FDialogueSpeakerEnum EnumValue);  // parameters 0x28
};
